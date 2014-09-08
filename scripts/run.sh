echo 'Creating positive training samples...'
./run_createsamples.sh

echo 'Merging generated samples...'
./run_merge.sh

echo 'Running classifier training...'
./run_trainer.sh

