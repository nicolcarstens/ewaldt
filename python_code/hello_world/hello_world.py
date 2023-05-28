"""
This is a simple Hello World python
It is as simple as "print("Hello World")" ...
But let's write it using OOP
"""

class HelloWorld:
    def __init__(self):
        self.message = "Hello, World!"

    def say_hello(self):
        print(self.message)

# Create an instance of HelloWorld
hello = HelloWorld()

# Call the say_hello method
hello.say_hello()