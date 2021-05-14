package com.example.android_c

class TestJNI {

    fun testProcess(): String {
        return test_string()
    }


    init {
        System.loadLibrary("test_android_c_interface")
    }

    private external fun test_string(): String

}