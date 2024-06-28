#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(sizeof(VAR4));
 char * VAR5 = (char *)FUN2(sizeof(VAR6));
 if(VAR7)
 {
 /* POTENTIAL FLAW: Initialize data to a buffer smaller than the sizeof(TwoIntsClass) */
 VAR2 = VAR3;
 }
 if(VAR7)
 {
 {
 /* POTENTIAL FLAW: data may not be large enough to hold a TwoIntsClass */
 VAR6 * VAR8 = new(VAR2) VAR6;
 VAR8->VAR9 = 5;
 classTwo->intTwo = 10; /* POTENTIAL FLAW: If sizeof(data) < sizeof(TwoIntsClass) then this line will be a buffer overflow */
 VAR8->VAR10 = 10;
 FUN3(VAR8->VAR9);
 }
 }
}
#endif
