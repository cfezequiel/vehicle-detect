opencv_traincascade -data ../data/classifier/ -vec ../data/samples.vec -bg negatives.txt\
  -numStages 10 -minHitRate 0.99 -maxFalseAlarmRate 0.5 -numPos 2000\
  -numNeg 600 -w 80 -h 40 -mode ALL -precalcValBufSize 1024\
  -precalcIdxBufSize 1024 -mem 512
