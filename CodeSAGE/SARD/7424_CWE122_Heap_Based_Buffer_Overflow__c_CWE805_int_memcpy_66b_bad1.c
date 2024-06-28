#ifndef VAR1
void FUN1(int * VAR2[])
{
 int * VAR3 = VAR2[2];
 {
 int VAR4[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR3, VAR4, 100*sizeof(int));
 FUN2(VAR3[0]);
 free(VAR3);
 }
}
#endif
