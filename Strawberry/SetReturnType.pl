use strict;
use warnings;

# This script opens generated ANTLR visitor files and modifies them to include a custom return type and default methods

sub main {

    my $filename = $ARGV[0];
    my $replacement = $ARGV[1];

    # open to read file lines, open to write
    open IN, '<', $filename or die $!;
    my @lines = ();
    push(@lines, $_) while (<IN>);
    close IN;
    open OUT, '>', $filename or die $!;

    my $haveAddedH = 0;
    $haveAddedH = 1 if join('',@lines) =~ /#include "..\/Cpp\/$replacement.h"\n#include "..\/Cpp\/StrawberryTree.h"/;

    for (@lines) {

        if (/(#include .+)/ && !$haveAddedH) {
            $haveAddedH = 1;
            $_ = "$1\n#include \"..\/Cpp\/$replacement.h\"\n#include \"..\/Cpp\/StrawberryTree.h\"\n"
        }

        s/std::any/Value/;
        s/return visitChildren\(ctx\)/return StrawberryTree::visitChildrenValue\(ctx\)/;

        print OUT;
    }

    close OUT;

}

main();
