texfile = DSA_2017_09.tex
outdir=/tmp

all: ${texfile}
	pdflatex --shell-escape --output-directory ${outdir} $< 

DSA_2017_09ex: DSA_2017_09ex.tex
	pdflatex --shell-escape --output-directory ${outdir} $< 


clean:
	rm *.aux *.log *.nav *.out *.snm *.toc *.vrb

o: ${texfile}
	gv ${outdir}/$(basename $<).pdf &

final: ${texfile}
	pdflatex --shell-escape --output-directory ${outdir} $< 
	pdflatex --shell-escape --output-directory ${outdir} $< 
	cp ${outdir}/$(basename $<).pdf .

