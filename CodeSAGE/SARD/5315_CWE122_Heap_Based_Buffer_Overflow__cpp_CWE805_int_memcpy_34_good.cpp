#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 VAR2 = new int[100];
 VAR3.VAR4 = VAR2;
 {
 int * VAR2 = VAR3.VAR5;
 {
 int VAR6[100] = {0};
 memcpy(VAR2, VAR6, 100*sizeof(int));
 FUN2(VAR2[0]);
 delete [] VAR2;
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
