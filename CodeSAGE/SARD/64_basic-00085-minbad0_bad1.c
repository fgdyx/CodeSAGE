int main(int argc, char *argv[])
{
 int VAR1;
 char VAR2[10];
 VAR1 = 0;
 while(++VAR1)
 {
 /* BAD */
 VAR2[10] = '';
 if (VAR1 >= 10) break;
 }
 return 0;
}
