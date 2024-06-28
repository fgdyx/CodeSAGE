#ifndef VAR1
void FUN1(structType VAR2)
{
 int * VAR3 = VAR2.VAR4;
 {
 int VAR5[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR3, VAR5, 100*sizeof(int));
 FUN2(VAR3[0]);
 delete [] VAR3;
 }
}
#endif
