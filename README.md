# torch_deploy_custom_ops

Repro steps
Preparation
1. build pytorch with torch::deploy enabled
2. git clone https://github.com/mreso/torch_deploy_custom_ops
3. mkdir torch_deploy_custom_ops/build && cd torch_deploy_custom_ops/build

Create libcusotm.so
4. cmake -DCMAKE_PREFIX_PATH="${PYTHON_BUILD_PATH}" ..

Run with Python
5. python ../run.py

Run with torch::deploy
6. ${PYTHON_BUILD_PATH}/build/bin/interactive_embedded_interpreter --pyscript ../run.py

