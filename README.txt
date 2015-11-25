/* Recall that the GCD of two integers A and B is the largest integer that divides both A and B
 * The Euclidean Algorithm is a technique for quickly finding the GCD of two integers
 *
 * The Euclidean Algorithm for finding GCD(A,B) is as follows:
 * If A = 0 then GCD(A,B)=B, since the GCD(0,B)=B, and we can stop.  
 * If B = 0 then GCD(A,B)=A, since the GCD(A,0)=A, and we can stop.  
 * Write A in quotient remainder form (A = B⋅Q + R)
 * Find GCD(B,R) using the Euclidean Algorithm since GCD(A,B) = GCD(B,R)
 */

Example: 
A = 270
B = 192

//check
A != 0
B != 0
//compute Q and R
A = B * Q + R -- This the quotient remainder form
Q = 1 , R = 78
270 = 192 * 1 + 78
//Note GCD(270,192) = GCD(192,78)
Here B = A and R = B
