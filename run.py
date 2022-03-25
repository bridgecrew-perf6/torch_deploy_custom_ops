import torch

torch.ops.load_library('libcustom.so')

print(torch.ops.my.add(1,3))