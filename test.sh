# check if container works
cd vortex
make -s
./ci/blackbox.sh --driver=rtlsim --cores=2 --app=vecadd