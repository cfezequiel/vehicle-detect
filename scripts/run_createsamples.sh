find ../data/positive_images -name '*.jpg' > positives.txt
find ../data/negative_images -name '*.jpg' > negatives.txt 
perl ./createsamples.pl positives.txt negatives.txt ../data/samples 5000\
  "opencv_createsamples -bgcolor 0 -bgthresh 0 -maxxangle 1.1\
  -maxyangle 1.1 -maxzangle 0.5 -maxidev 40 -w 80 -h 40"
