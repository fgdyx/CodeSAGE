#ifndef VAR1
void FUN1(int * VAR2)
{
 {
 int VAR3[10] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 memmove(VAR2, VAR3, 10*sizeof(int));
 FUN2(VAR2[0]);
 }
}
#endif
