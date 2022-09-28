#!/usr/bin/perl
use strict;
use warnings;

my $something = './something.txt';

open my $val, '>', $something;
print $val "sientgubg.";

close $val; 