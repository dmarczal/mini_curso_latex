
install: cleanPdf copystyles beamer_presentation.pdf clean
	evince beamer_presentation.pdf &

beamer_presentation.pdf:
	pdflatex -shell-escape beamer_presentation
	pdflatex -shell-escape beamer_presentation

bibliograph.bbl:
	pdflatex -shell-escape beamer_presentation
	bibtex beamer_presentation

cleanPdf:
	rm -f beamer_presentation.pdf

copythemes:
	mkdir -p ~/texmf/tex/latex/beamer
	cp -r themes/*.sty ~/texmf/tex/latex/beamer

copystyles:
	mkdir -p ~/texmf/tex/latex/beamer
	cp -r stys/*.sty ~/texmf/tex/latex/beamer

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
	rm -f beamer_presentation.ps
	rm -f beamer_presentation.dvi
	rm -f *.nav
	rm -f *.out
	rm -f *.snm
	rm -f beamer_presentation.pyg
	rm -f beamer_presentation.vrb

