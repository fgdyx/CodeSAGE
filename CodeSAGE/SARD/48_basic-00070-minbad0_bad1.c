#VAR1 <VAR2.VAR3>
int main(int argc, char *argv[])
{
 jmp_buf VAR4;
 int VAR5;
 char VAR6[10];
 if (FUN1(VAR4) != 0)
 {
 return 0;
 }
 VAR5 = 1;
 if (VAR5)
 {
 /* BAD */
 VAR6[10] = '';
 }
 FUN2(VAR4, 1);
 return 0;
}
