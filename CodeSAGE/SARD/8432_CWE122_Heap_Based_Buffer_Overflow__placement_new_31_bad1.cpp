#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 /* POTENTIAL FLAW: Initialize data to a buffer small than the sizeof(TwoIntsClass) */
 VAR2 = VAR3;
 {
 char * VAR7 = VAR2;
 char * VAR2 = VAR7;
 {
 /* POTENTIAL FLAW: data may not be large enough to hold a TwoIntsClass */
 VAR6 * VAR8 = new(VAR2) VAR6;
 VAR8->VAR9 = 5;
 classTwo->intTwo = 10; /* POTENTIAL FLAW: If sizeof(data) < sizeof(TwoIntsClass) then this line will be a buffer overflow */
 VAR8->VAR10 = 10;
 FUN2(VAR8->VAR9);
 free(VAR2);
 }
 }
}
#endif
