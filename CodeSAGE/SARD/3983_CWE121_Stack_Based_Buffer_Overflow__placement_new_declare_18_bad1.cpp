#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[sizeof(VAR4)];
 char VAR5[sizeof(VAR6)];
 goto VAR7;
VAR7:
 /* POTENTIAL FLAW: Initialize data to a buffer smaller than the sizeof(TwoIntsClass) */
 VAR2 = VAR3;
 goto VAR8;
VAR8:
 {
 /* POTENTIAL FLAW: data may not be large enough to hold a TwoIntsClass */
 VAR6 * VAR9 = new(VAR2) VAR6;
 VAR9->VAR10 = 5;
 classTwo->intTwo = 10; /* POTENTIAL FLAW: If sizeof(data) < sizeof(TwoIntsClass) then this line will be a buffer overflow */
 VAR9->VAR11 = 10;
 FUN2(VAR9->VAR10);
 }
}
#endif
