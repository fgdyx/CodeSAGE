#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 switch(6)
 {
 case 6:
 /* POTENTIAL FLAW: Initialize data to a buffer small than the sizeof(TwoIntsClass) */
 VAR2 = VAR3;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 {
 /* POTENTIAL FLAW: data may not be large enough to hold a TwoIntsClass */
 VAR6 * VAR7 = new(VAR2) VAR6;
 VAR7->VAR8 = 5;
 classTwo->intTwo = 10; /* POTENTIAL FLAW: If sizeof(data) < sizeof(TwoIntsClass) then this line will be a buffer overflow */
 VAR7->VAR9 = 10;
 FUN3(VAR7->VAR8);
 free(VAR2);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
