from setuptools import find_packages
from setuptools import setup

setup(
    name='hunav_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('hunav_msgs', 'hunav_msgs.*')),
)
