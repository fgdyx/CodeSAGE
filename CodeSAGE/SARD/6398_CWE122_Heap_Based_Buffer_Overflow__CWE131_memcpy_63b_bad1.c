#ifndef VAR1
void FUN1(int * * VAR2)
{
 int * VAR3 = *VAR2;
 {
 int VAR4[10] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 memcpy(VAR3, VAR4, 10*sizeof(int));
 FUN2(VAR3[0]);
 free(VAR3);
 }
}
#endif
