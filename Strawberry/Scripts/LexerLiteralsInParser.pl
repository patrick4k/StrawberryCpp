#!/usr/bin/perl
use strict;
use warnings;

# TODO: Maybe add to cmake script?

open FH, '<', 'StrawberryLexer.tokens' or die $!;
my @tokens = ();
while (<FH>) {
    if (/(.+)=(\d+)/) {
        if (defined $tokens[$2]) {
            push(@{$tokens[$2]},$1);
        }
        else {
            @{$tokens[$2]} = ($1);
        }
    }
}
close FH;

open IN, '<', 'StrawberryParserWithLexers.g4' or die $!;
open OUT, '>', 'StrawberryParser.g4' or die $!;

print "Processing ".<IN>."\n";
print OUT "parser grammar StrawberryParser;\n";

while (<IN>) {
    my $line = $_;
    for (@tokens) {
        next unless defined @{$_}[0];
        next unless defined @{$_}[1];
        my ($id, $lex) = @{$_};
        if ($line =~ s/\Q$lex\E/$id/) {
            print "$id\t$lex\n";
            print $line."\n\n";
        }
    }
    print OUT $line;
}

close IN;
close OUT;
