from setuptools import find_packages
from setuptools import setup

setup(
    name='px4',
    version='1.14.0',
    packages=find_packages(
        include=('px4', 'px4.*')),
)
