#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[sizeof(VAR4)];
 char VAR5[sizeof(VAR6)];
 if(VAR7==5)
 {
 /* POTENTIAL FLAW: Initialize data to a buffer smaller than the sizeof(TwoIntsClass) */
 VAR2 = VAR3;
 }
 if(VAR7==5)
 {
 {
 /* POTENTIAL FLAW: data may not be large enough to hold a TwoIntsClass */
 VAR6 * VAR8 = new(VAR2) VAR6;
 VAR8->VAR9 = 5;
 classTwo->intTwo = 10; /* POTENTIAL FLAW: If sizeof(data) < sizeof(TwoIntsClass) then this line will be a buffer overflow */
 VAR8->VAR10 = 10;
 FUN2(VAR8->VAR9);
 }
 }
}
#endif
