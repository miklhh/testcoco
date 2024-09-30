project(
    'testcoco',
    'cpp', 'c',
    default_options : ['cpp_std=c++17', 'c_std=c17', 'b_lto=true'],
    version : '0.0.1'
)

# Python module includes
py3 = import('python').find_installation('python3', pure: false)
py3_dep = py3.dependency()

# Nanobind dependency
nanobind_dep = dependency('nanobind')

# Python module
py3.extension_module(
    '_testcoco',
    sources : files([
        'test-mod.cc',
    ]),
    dependencies : [py3_dep, nanobind_dep],
    subdir: 'testcoco',
    install: true,
)
