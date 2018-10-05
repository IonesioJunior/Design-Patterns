#!/usr/bin/env python
# coding=utf-8

__author__  = "Ionesio Junior"

''' Code to show Abstract Factory pattern in python  '''

import sys
import abc


class AbstractFactory( metaclass=abc.ABCMeta ):

    @abc.abstractmethod
    def create_button( self ):
        pass

    def create_menu( self ):
        pass

class Linux(metaclass=abc.ABCMeta):

    @abc.abstractmethod
    def show_info(self):
        raise NotImplementedError

class Windows(metaclass=abc.ABCMeta):

    @abc.abstractmethod
    def show_info(self):
        raise NotImplementedError



class LinuxButton(Linux):
    def __init__(self):
        super(Linux,self).__init__()

    def show_info(self):
        return "System : Linux | Widget : Button"

class LinuxMenu(Linux):
    def __init__(self):
        super(Linux,self).__init__()

    def show_info(self):
        return "System : Linux | Widget : Menu"



class WindowsButton(Windows):
    def __init__(self):
        super(Windows, self).__init__()

    def show_info(self):
        return "System : Windows | Widget : Button"

class WindowsMenu(Windows):
    def __init__(self):
        super(Windows,self).__init__()

    def show_info(self):
        return "System : Windows | Widget : Menu"



class LinuxFactory(AbstractFactory):
    def __init__(self):
        super(AbstractFactory, self).__init__()

    @staticmethod
    def create_button(): return LinuxButton()

    @staticmethod
    def create_menu(): return LinuxMenu()

class WindowsFactory(AbstractFactory):
    def __init__(self):
        super(AbstractFactory,self).__init__()

    @staticmethod
    def create_button(): return WindowsButton()

    @staticmethod
    def create_menu(): return WindowsMenu()

class SelectorFactory(object):

    def get_factory(environment):
        if( environment == "windows" ):
            return WindowsFactory
        elif( environment == "linux" ):
            return LinuxFactory
        else:
            return None

if __name__ == "__main__":
    if ( len(sys.argv) != 2 ):
        print ("Invalid execution!")
        print ("Example : python windows")
        exit(1)
    else:
        factory = SelectorFactory.get_factory(sys.argv[1])
        print(factory.create_button().show_info())
        print(factory.create_menu().show_info())
