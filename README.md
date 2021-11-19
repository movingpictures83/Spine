# Spine
# Language: C++
# Input: TXT
# Output: PREFIX
# Tested with: PluMA 2.0, GCC 4.8.4
# Dependencies: Unicycler 0.3.2

PluMA plugin to compute core and accessory genomes
using Spine (Ozer et al, 2014).

The plugin accepts as input a TXT file with a list of FASTA
files of genes.  It will then compute the core and accessory
genome for each one.  

The output PREFIX will be used for these files, with the suffixes
".core.fasta" and ".accessory.fasta", respectively.


