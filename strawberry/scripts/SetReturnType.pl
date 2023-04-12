use strict;
use warnings;

# This script opens generated ANTLR visitor files and modifies
# them to include a custom return type and default methods

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
    $haveAddedH = 1 if join('',@lines) =~
        /#include "..\/Cpp\/types\/$replacement.h"/;

    for (@lines) {

        if (/(#include .+)/ && !$haveAddedH) {
            $haveAddedH = 1;
            $_ = "$1\n#include \"..\/cpp\/types\/$replacement.h\"\n"
        }

        s/std::any/$replacement/;
        s/return visitChildren\(ctx\)/return std::any_cast<$replacement>\(visitChildren\(ctx\)\)/;

        print OUT;
    }

    close OUT;

}

main();
