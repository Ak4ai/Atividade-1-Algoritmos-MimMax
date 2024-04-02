set terminal pngcairo enhanced font "arial,10" size 1280,720
set output 'minmax.png'

# Definindo a cor de fundo do gráfico
set object 1 rectangle from screen 0,0 to screen 1,1 behind fillcolor rgb "#0d1117" fillstyle solid 1

set title "Tempo de Execução x Tamanho do Conjunto de Dados" textcolor rgb "#ffffff"
set xlabel "Tamanho do Conjunto de Dados" textcolor rgb "#ffffff"
set ylabel "Tempo de Execução (microssegundos)" textcolor rgb "#ffffff"

set key top left textcolor rgb "#ffffff"
set grid linecolor rgb "#ffffff" linewidth 1
set border linecolor rgb "#ffffff" linewidth 1

# Definindo as cores e estilos de linha para os conjuntos de dados
set style line 1 lc rgb '#ff3333' lt 1 lw 2 pt 7 ps 1   # MinMax1
set style line 2 lc rgb '#ff6233' lt 1 lw 2 pt 9 ps 1   # MinMax1 (Crescente)
set style line 3 lc rgb '#ff3333' lt 1 lw 2 pt 11 ps 1  # MinMax1 (Decrescente)

# Definindo as cores e estilos de linha para os conjuntos de dados MinMax2 e MinMax3
set style line 4 lc rgb '#a8ff33' lt 1 lw 2 pt 7 ps 1   # MinMax2
set style line 5 lc rgb '#a8ff33' lt 1 lw 2 pt 9 ps 1   # MinMax2 (Crescente)
set style line 6 lc rgb '#33ff73' lt 1 lw 2 pt 11 ps 1  # MinMax2 (Decrescente)

set style line 7 lc rgb '#33beff' lt 1 lw 2 pt 7 ps 1   # MinMax3
set style line 8 lc rgb '#3360ff' lt 1 lw 2 pt 9 ps 1   # MinMax3 (Crescente)
set style line 9 lc rgb '#9433ff' lt 1 lw 2 pt 11 ps 1  # MinMax3 (Decrescente)

plot 'dados.txt' using 1:2 with linespoints linestyle 1 title 'MinMax1', \
     '' using 1:3 with linespoints linestyle 2 title 'MinMax1 (Crescente)', \
     '' using 1:4 with linespoints linestyle 3 title 'MinMax1 (Decrescente)', \
     '' using 1:5 with linespoints linestyle 4 title 'MinMax2', \
     '' using 1:6 with linespoints linestyle 5 title 'MinMax2 (Crescente)', \
     '' using 1:7 with linespoints linestyle 6 title 'MinMax2 (Decrescente)', \
     '' using 1:8 with linespoints linestyle 7 title 'MinMax3', \
     '' using 1:9 with linespoints linestyle 8 title 'MinMax3 (Crescente)', \
     '' using 1:10 with linespoints linestyle 9 title 'MinMax3 (Decrescente)'
