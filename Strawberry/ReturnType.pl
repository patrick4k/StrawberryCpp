use strict;
use warnings;

sub main {

    my $filename = $ARGV[0];
    my $replacement = $ARGV[1];

    open IN, '<', $filename or die $!;

    my @lines = ();
    push(@lines, $_) while (<IN>);

    my $OUT = '';
    my $haveAddedH = 0;
    $haveAddedH = 1 if join('',@lines) =~ /#include "..\/Cpp\/$replacement.h"\n#include "..\/Cpp\/StrawberryTree.h"/;

    for (@lines) {

        if (/(#include .+)/ && !$haveAddedH) {
            $haveAddedH = 1;
            $_ = "$1\n#include \"..\/Cpp\/$replacement.h\"\n#include \"..\/Cpp\/StrawberryTree.h\"\n"
        }

        s/std::any/Value/;
        s/return visitChildren\(ctx\)/return StrawberryTree::visitChildrenValue\(ctx\)/;

        $OUT .= $_;
    }

    close IN;
    open OUT, '>', $filename or die $!;
    print OUT $OUT;
    close OUT;

}

main();
