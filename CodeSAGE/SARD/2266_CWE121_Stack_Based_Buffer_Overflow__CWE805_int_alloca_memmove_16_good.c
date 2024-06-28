#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int * VAR3 = (int *)FUN2(50*sizeof(int));
 int * VAR4 = (int *)FUN2(100*sizeof(int));
 while(1)
 {
 VAR2 = VAR4;
 break;
 }
 {
 int VAR5[100] = {0};
 memmove(VAR2, VAR5, 100*sizeof(int));
 FUN3(VAR2[0]);
 }
}
void FUN4()
{
 FUN1();
}
#endif
