IMAGES =	libc new-libc sigreturn srop anti-srop

all: ${IMAGES:S/$/.ps/}

.SUFFIXES: .dia .svg .pdf .ps

.dia.svg:
	dia --export=$@ --filter=svg $<

.svg.pdf:
	inkscape --without-gui --export-width=1024 --export-pdf=$@ $<

.pdf.ps:
	pdftops $< $@

clean:
	rm -f *.svg *.pdf *.ps
