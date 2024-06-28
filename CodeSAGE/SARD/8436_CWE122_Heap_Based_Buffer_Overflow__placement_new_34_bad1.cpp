#ifndef VAR1
void FUN1()
{
 char * VAR2;
 unionType VAR3;
 char * VAR4 = (char *)malloc(sizeof(VAR5));
 char * VAR6 = (char *)malloc(sizeof(VAR7));
 /* POTENTIAL FLAW: Initialize data to a buffer small than the sizeof(TwoIntsClass) */
 VAR2 = VAR4;
 VAR3.VAR8 = VAR2;
 {
 char * VAR2 = VAR3.VAR9;
 {
 /* POTENTIAL FLAW: data may not be large enough to hold a TwoIntsClass */
 VAR7 * VAR10 = new(VAR2) VAR7;
 VAR10->VAR11 = 5;
 classTwo->intTwo = 10; /* POTENTIAL FLAW: If sizeof(data) < sizeof(TwoIntsClass) then this line will be a buffer overflow */
 VAR10->VAR12 = 10;
 FUN2(VAR10->VAR11);
 free(VAR2);
 }
 }
}
#endif
