#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 /* POTENTIAL FLAW: data may not be large enough to hold a TwoIntsClass */
 VAR4 * VAR5 = new(VAR2) VAR4;
 VAR5->VAR6 = 5;
 classTwo->intTwo = 10; /* POTENTIAL FLAW: If sizeof(data) < sizeof(TwoIntsClass) then this line will be a buffer overflow */
 VAR5->VAR7 = 10;
 FUN2(VAR5->VAR6);
 }
}
void FUN3()
{
 char * VAR2;
 char VAR8[sizeof(VAR9)];
 /* POTENTIAL FLAW: Initialize data to a buffer smaller than the sizeof(TwoIntsClass) */
 char VAR10[sizeof(VAR4)];
 VAR2 = VAR8;
 VAR3 = VAR2;
 FUN1();
}
#endif
