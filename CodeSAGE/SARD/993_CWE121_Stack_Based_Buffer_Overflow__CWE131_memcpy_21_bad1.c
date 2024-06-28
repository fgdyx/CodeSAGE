#ifndef VAR1
static int VAR2 = 0;
static int * FUN1(int * VAR3)
{
 if(VAR2)
 {
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR3 = (int *)FUN2(10);
 }
 return VAR3;
}
void FUN3()
{
 int * VAR3;
 VAR3 = NULL;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 int VAR4[10] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 memcpy(VAR3, VAR4, 10*sizeof(int));
 FUN4(VAR3[0]);
 }
}
#endif
