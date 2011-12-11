package com.example.HelloBoost;

import android.test.ActivityInstrumentationTestCase;

/**
 * This is a simple framework for a test of an Application.  See
 * {@link android.test.ApplicationTestCase ApplicationTestCase} for more information on
 * how to write and extend Application tests.
 * <p/>
 * To run this test, you can type:
 * adb shell am instrument -w \
 * -e class com.example.HelloBoost.HelloBoostTest \
 * com.example.HelloBoost.tests/android.test.InstrumentationTestRunner
 */
public class HelloBoostTest extends ActivityInstrumentationTestCase<HelloJni> {

    public HelloBoostTest() {
        super("com.example.HelloBoost", HelloBoost.class);
    }

}
