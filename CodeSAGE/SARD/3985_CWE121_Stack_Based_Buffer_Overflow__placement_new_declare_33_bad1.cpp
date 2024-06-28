#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 char VAR4[sizeof(VAR5)];
 char VAR6[sizeof(VAR7)];
 /* POTENTIAL FLAW: Initialize data to a buffer smaller than the sizeof(TwoIntsClass) */
 VAR2 = VAR4;
 {
 char * VAR2 = VAR3;
 {
 /* POTENTIAL FLAW: data may not be large enough to hold a TwoIntsClass */
 VAR7 * VAR8 = new(VAR2) VAR7;
 VAR8->VAR9 = 5;
 classTwo->intTwo = 10; /* POTENTIAL FLAW: If sizeof(data) < sizeof(TwoIntsClass) then this line will be a buffer overflow */
 VAR8->VAR10 = 10;
 FUN2(VAR8->VAR9);
 }
 }
}
#endif
