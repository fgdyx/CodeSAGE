#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 int * VAR3;
 VAR3 = (int *)FUN3(10*sizeof(int));
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR3[VAR4] = VAR4;
 }
 }
 FUN1(&VAR3);
}
void FUN4(void * VAR2);
static void FUN5()
{
 int * VAR3;
 VAR3 = (int *)FUN3(10*sizeof(int));
 ;
 FUN4(&VAR3);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
