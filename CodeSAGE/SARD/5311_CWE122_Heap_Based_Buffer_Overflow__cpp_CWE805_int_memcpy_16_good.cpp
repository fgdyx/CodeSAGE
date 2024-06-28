#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = new int[100];
 break;
 }
 {
 int VAR3[100] = {0};
 memcpy(VAR2, VAR3, 100*sizeof(int));
 FUN2(VAR2[0]);
 delete [] VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
