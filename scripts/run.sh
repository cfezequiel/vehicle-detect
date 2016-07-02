#========================================================
#### METHOD 1: Generate more samples ####
echo 'Creating positive training samples...'
#mkdir -p samples
#find ../datasets/CarData_modified/TrainImages/ -name "pos*.pgm" > ../build/positives.txt
#find ../datasets/CarData_modified/TrainImages/ -name "neg*.pgm" > ../build/negatives.txt
#perl ./createsamples.pl ../build/positives.txt ../build/negatives.txt ../build/samples 5000 "opencv_createsamples -bgcolor 0 -bgthresh 0 -maxxangle 1.1 -maxyangle 1.1 -maxzangle 0.5 -maxidev 40 -w 80 -h 40"

echo 'Merging generated samples...'
#find ../build/samples -name '*.vec' > ../build/samples.txt && ../bin/mergevec ../build/samples.txt ../build/samples.vec -w 80 -h 40

echo 'Running classifier training...'
#opencv_traincascade -data ../build/classifier/ -vec ../build/samples.vec -bg ../build/negatives.txt -numStages 2 -minHitRate 0.99 -maxFalseAlarmRate 0.5 -numPos 4000 -numNeg 500 -w 80 -h 40 -mode ALL -precalcValBufSize 1024 -precalcIdxBufSize 1024 -mem 512 >& train.log
#========================================================


#========================================================
#### METHOD 2: Use positive samples directly ####
echo 'Generating *.vec file...'
find ../datasets/CarData/TrainImages/ -iname "pos*.pgm" -exec echo \{\} 1 0 0 100 40 \; > ../build/positives.info
find ../datasets/CarData/TrainImages/ -name "neg*.pgm" > ../build/negatives.txt
opencv_createsamples -info ../build/positives.info -num 550 -w 48 -h 24 -vec ../build/samples.vec 
rm -rf ../build/classifier/*
opencv_traincascade -data ../build/classifier -vec ../build/samples.vec -bg ../build/negatives.txt -numStages 16 -nsplits 2 -minhitrate 0.999 -maxfalsealarm 0.5 -numPos 500 -numNeg 500 -w 48 -h 24 -featureType HAAR
