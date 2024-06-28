#ifndef VAR1
int VAR2 = 0;
int * FUN1(int * VAR3);
void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 int VAR4[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR3, VAR4, 100*sizeof(int));
 FUN3(VAR3[0]);
 free(VAR3);
 }
}
#endif
