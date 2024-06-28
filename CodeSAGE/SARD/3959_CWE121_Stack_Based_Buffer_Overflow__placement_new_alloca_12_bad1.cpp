#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(sizeof(VAR4));
 char * VAR5 = (char *)FUN2(sizeof(VAR6));
 if(FUN3())
 {
 /* POTENTIAL FLAW: Initialize data to a buffer smaller than the sizeof(TwoIntsClass) */
 VAR2 = VAR3;
 }
 else
 {
 VAR2 = VAR5;
 }
 if(FUN3())
 {
 {
 /* POTENTIAL FLAW: data may not be large enough to hold a TwoIntsClass */
 VAR6 * VAR7 = new(VAR2) VAR6;
 VAR7->VAR8 = 5;
 classTwo->intTwo = 10; /* POTENTIAL FLAW: If sizeof(data) < sizeof(TwoIntsClass) then this line will be a buffer overflow */
 VAR7->VAR9 = 10;
 FUN4(VAR7->VAR8);
 }
 }
 else
 {
 {
 VAR4 * VAR10 = new(VAR2) VAR4;
 VAR10->VAR8 = 5;
 FUN4(VAR10->VAR8);
 }
 }
}
#endif
