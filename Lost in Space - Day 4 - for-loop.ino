/* First, let's initialize some arrays. 
To make things more readable, you could also initialize 
variables named after their respective LEDS & switches before assigning them to our array. */

int led[3] = {2, 3, 4}; // LEDs on pins 2, 3 & 4
int dip[3] = {10, 11, 12}; // DIP switches on pin 10, 11 & 12

/* 
  An array is like a list, and it works like this:
    - 'int led[3]' means we are identifying an array that will have 3 elements within it
    - '{2, 3, 4}' means that our array will contain the elements of '2', '3' & '4'.  
  NOTE: Elements of an array also have an 'index' that automatically gets assigned to them. Let's see how that works below.
*/

void setup() {
  // In our setup function, we can use a for-loop to iterate over each element...
  // 'int i' is our iterator variable. The parentheses say, "'i' is 0. if 'i' is less than 3, perform the loop & add 1."
  // The loop will contiunue this pattern until 'i' is no longer less than 3.
  for (int i = 0; i < 3; i++) { 

    // Inside our loop, we can establish pinmode configurations.
    pinMode(led[i], OUTPUT); // This will run once per iteration
    pinMode(dip[i], INPUT);  // So wil this!

    /*
      By using 'i' as in 'led[i]' & 'dip[i]', we are referencing the index of the array.
      When 'i' is 0, we will access index 0 of both arrays 'led' & 'dip'.
      When 'i' is 1, we will access index 1 of both arrays 'led' & 'dip', and so on...
    */

  }
}

void loop() {

  // Within our runtime loop, we can use another for-loop to iterate over the elements in our array...
  for (int i = 0; i < 3; i++) {

    /* 
      ... but this time, we'll include a single if/else conditional statement within the loop.
      It will be called once per iteration 
    */
    if (digitalRead(dip[i]) == HIGH) { 
      digitalWrite(led[i], HIGH);
    } else {
      digitalWrite(led[i], LOW);
    }

  } // end for-loop

} // end runtime loop()
