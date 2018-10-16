# Builds latex files
TEX = pdflatex
BIB = bibtex

all: Deliverable4.pdf

Deliverable4.pdf: Deliverable4.tex
	$(TEX) Deliverable4.tex
	$(BIB) Deliverable4.aux
	$(TEX) Deliverable4.tex


view : Deliverable4.pdf
	open Deliverable4.pdf

clean :
	rm *.out *.log *.aux *.pdf
