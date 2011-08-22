
install: cleanPdf bibliograph.bbl apresentacao.pdf clean
	evince apresentacao.pdf &

apresentacao.pdf:
	pdflatex -shell-escape apresentacao
	pdflatex -shell-escape apresentacao

bibliograph.bbl:
	pdflatex -shell-escape apresentacao
	bibtex apresentacao
	pdflatex -shell-escape apresentacao
	pdflatex -shell-escape apresentacao

cleanPdf:
	rm -f apresentacao.pdf

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
	rm -f apresentacao.ps
	rm -f apresentacao.dvi
	rm -f *.nav
	rm -f *.out
	rm -f *.snm

