
install: cleanPdf apresentação.pdf clean
	evince apresentação.pdf &

apresentação.pdf:
	pdflatex -shell-escape apresentação
	pdflatex -shell-escape apresentação

bibliograph.bbl:
	pdflatex -shell-escape apresentação
	bibtex apresentação

cleanPdf:
	rm -f apresentação.pdf

copythemes:
	mkdir -p ~/texmf/tex/latex/beamer
	cp -r themes/*.sty ~/texmf/tex/latex/beamer

clean:
	rm -f *.aux
	rm -f *.bbl
	rm -f *.bak
	rm -f *.log
	rm -f *.blg
	rm -f *.toc
	rm -f *.lot
	rm -f *.lof
	rm -f *.dvi
	rm -f *.idx
	rm -f *.ilg
	rm -f *.ind
	rm -f **/*~
	rm -f *~
	rm -f apresentação.ps
	rm -f apresentação.dvi
	rm -f *.nav
	rm -f *.out
	rm -f *.snm

