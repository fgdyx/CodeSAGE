#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 char * VAR3;
 VAR3 = NULL;
 VAR3 = new char;
 FUN1(&VAR3);
}
void FUN3(void * VAR2);
static void FUN4()
{
 char * VAR3;
 VAR3 = NULL;
 VAR3 = NULL;
 VAR3 = (char *)realloc(VAR3, 100*sizeof(char));
 FUN3(&VAR3);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
