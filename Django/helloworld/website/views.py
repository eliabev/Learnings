from django.shortcuts import render
from django.http import HttpResponse

def index(request):
    return HttpResponse("Hello, my friends")

def eli(request):
    return HttpResponse("My name is Eli")
