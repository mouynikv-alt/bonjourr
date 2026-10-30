from tkinter import*
T2=Tk()
B2 = StringVar()
Label(T2,textvariable=B2,width=30,fg='blue').pack()
Entry(textvariable=B2,width=30).pack()

B3 = StringVar()
Label(T2,textvariable=B3,width=30,fg='black').pack()
Entry(textvariable=B3,width=30).pack()


B4 = StringVar()
Label(T2,textvariable=B4,width=30,fg='green').pack()
Entry(textvariable=B4,width=30).pack()

B5 = StringVar()
Label(T2,textvariable=B5,width=30,fg='pink').pack()
Entry(textvariable=B5,width=30).pack()

B6 = StringVar()
Label(T2,textvariable=B6,width=30,fg='red').pack()
Entry(textvariable=B6,width=30).pack()


B7 = StringVar()
Label(T2,textvariable=B7,width=30,fg='yellow').pack()
Entry(textvariable=B7,width=30).pack()


B8 = StringVar()
Label(T2,textvariable=B8,width=30,fg='purple').pack()
Entry(textvariable=B8,width=30).pack()


B9 = StringVar()
Label(T2,textvariable=B9,width=30,fg='orange').pack
Entry(textvariable=B9,width=30).pack()
Button(T2,text='close',command=T2.destroy).pack()
T2.mainloop()


