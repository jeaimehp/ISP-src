program strings
implicit none

character(len=10)       :: first, last ! String of max length 10
character(len=20)   :: full        ! String of max length 20

first = ''              ! String with no content '          '
first = 'John'  ! 4 letters + 6 trailing blanks 'John      '
last  = 'Doe'
full  = first           ! Assignment
full  = first // last   ! Assignment with concatenation
print *, full
full  = trim(first) // ' ' // trim(last) ! trim() cuts off trailing
print *, full                                              !blanks
                                                           ! //
                                                           ! concatenates
                                                           ! strings

end program
