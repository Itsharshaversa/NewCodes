%-------------------------
% Resume in Latex (filled for Harshit Srivastava)
% Based on the original template shared by the user
%------------------------

\documentclass[letterpaper,11pt]{article}
\usepackage{latexsym}
\usepackage[empty]{fullpage}
\usepackage{titlesec}
\usepackage{marvosym}
\usepackage[usenames,dvipsnames]{color}
\usepackage{verbatim}
\usepackage{enumitem}
\usepackage[hidelinks]{hyperref}
\usepackage[english]{babel}
\usepackage{tabularx}
\usepackage{fontawesome5}
\usepackage{multicol}
\usepackage{graphicx}
\setlength{\multicolsep}{-3.0pt}
\setlength{\columnsep}{-1pt}
\input{glyphtounicode}

\RequirePackage{tikz}
\RequirePackage{xcolor}
\RequirePackage{fontawesome}
\usetikzlibrary{svg.path}

\definecolor{cvblue}{HTML}{0E5484}
\definecolor{black}{HTML}{130810}
\definecolor{darkcolor}{HTML}{0F4539}
\definecolor{cvgreen}{HTML}{3BD80D}
\definecolor{taggreen}{HTML}{00E278}
\definecolor{SlateGrey}{HTML}{2E2E2E}
\definecolor{LightGrey}{HTML}{666666}
\colorlet{name}{black}
\colorlet{tagline}{darkcolor}
\colorlet{heading}{darkcolor}
\colorlet{headingrule}{cvblue}
\colorlet{accent}{darkcolor}
\colorlet{emphasis}{SlateGrey}
\colorlet{body}{LightGrey}

% Adjust margins
\addtolength{\oddsidemargin}{-0.6in}
\addtolength{\evensidemargin}{-0.5in}
\addtolength{\textwidth}{1.19in}
\addtolength{\topmargin}{-.7in}
\addtolength{\textheight}{1.4in}

\urlstyle{same}
\raggedbottom
\raggedright
\setlength{\tabcolsep}{0in}

% Sections formatting
\titleformat{\section}{
  \vspace{-4pt}\scshape\raggedright\large\bfseries
}{}{0em}{}[\color{black}\titlerule \vspace{-5pt}]

% Ensure ATS parsable
\pdfgentounicode=1

%-------------------------
% Custom commands
\newcommand{\resumeItem}[1]{\item\small{{#1 \vspace{-2pt}}}}
\newcommand{\classesList}[4]{\item\small{{#1 #2 #3 #4 \vspace{-2pt}}}}
\newcommand{\resumeSubheading}[4]{
  \vspace{-2pt}\item
    \begin{tabular*}{1.0\textwidth}[t]{l@{\extracolsep{\fill}}r}
      \textbf{\large#1} & \textbf{\small #2} \\
      \textit{\large#3} & \textit{\small #4} \\
    \end{tabular*}\vspace{-7pt}
}
\newcommand{\resumeSubSubheading}[2]{
  \item
  \begin{tabular*}{0.97\textwidth}{l@{\extracolsep{\fill}}r}
    \textit{\small#1} & \textit{\small #2} \\
  \end{tabular*}\vspace{-7pt}
}
\newcommand{\resumeProjectHeading}[2]{
  \item
  \begin{tabular*}{1.001\textwidth}{l@{\extracolsep{\fill}}r}
    \small#1 & \textbf{\small #2}\\
  \end{tabular*}\vspace{-7pt}
}
\newcommand{\resumeSubItem}[1]{\resumeItem{#1}\vspace{-4pt}}
\renewcommand\labelitemi{$\vcenter{\hbox{\tiny$\bullet$}}$}
\renewcommand\labelitemii{$\vcenter{\hbox{\tiny$\bullet$}}$}
\newcommand{\resumeSubHeadingListStart}{\begin{itemize}[leftmargin=0.0in, label={}]}
\newcommand{\resumeSubHeadingListEnd}{\end{itemize}}
\newcommand{\resumeItemListStart}{\begin{itemize}}
\newcommand{\resumeItemListEnd}{\end{itemize}\vspace{-5pt}}
\newcommand\sbullet[1][.5]{\mathbin{\vcenter{\hbox{\scalebox{#1}{$\bullet$}}}}}

%-------------------------------------------
%%%%%%  RESUME STARTS HERE  %%%%%%%%%%%%%%%%%

\begin{document}

%----------HEADING----------
\begin{center}
    {\Huge \scshape Harshit Srivastava} \\ \vspace{1pt}
    Ghaziabad, Uttar Pradesh \\ \vspace{1pt}
    \small
    \href{tel:+917303367506}{\raisebox{-0.1\height}\faPhone\ \underline{+91-7303367506}} ~
    \href{mailto:harshit20041910@gmail.com}{\raisebox{-0.2\height}\faEnvelope\ \underline{harshit20041910@gmail.com}} ~
    \href{https://linkedin.com/in/harshit-srivastava-aiml/}{\raisebox{-0.2\height}\faLinkedin\ \underline{harshit-srivastava-aiml}} ~
    \href{https://leetcode.com/u/itsharshit04/}{\raisebox{-0.2\height}\faCode\ \underline{itsharshit04}}
    \vspace{-8pt}
\end{center}
%-----------EDUCATION-----------
\section{EDUCATION}
\resumeSubHeadingListStart

\resumeSubheading
{KIET Group of Institutions}{2023 -- 2027}
{B.Tech in Computer Science \& Engineering (AI \& ML) — \textbf{CGPA: 7.8}}{Ghaziabad, India}

\resumeSubheading
{Ch. Chhabil Dass Public School}{2022 -- 2023}
{Class XII (CBSE) — \textbf{83.2\%}}{Ghaziabad, India}



\resumeSubHeadingListEnd


% %------COURSEWORK / SKILLS-------
% \section{COURSEWORK / SKILLS}
% \begin{multicols}{4}
%   \begin{itemize}[itemsep=-2pt, parsep=5pt]
%     \item Data Structures \& Algorithms
%     \item Operating Systems
%     \item DBMS
%     \item OOPS
%     \item Web Development
%     \item Android Development
%     \item Artificial Intelligence
%     \item Machine Learning
%   \end{itemize}
% \end{multicols}
% \vspace*{2.0\multicolsep}

%-----------PROJECTS-----------
\section{PROJECTS}
\vspace{-6pt}
\resumeSubHeadingListStart

\resumeProjectHeading{\href{https://google.com}{\textbf{\large\underline{Real-Time Collaboration Dashboard $|$ {{MERN, Socket.IO, MongoDB, JWT}}}}}}{\large2026}
\vspace{-9pt}
    \resumeItemListStart
      \resumeItem{\normalsize{Built a real-time dashboard where users share and co-edit documents, images, text, and audio with presence indicators and live updates.}}
      \resumeItem{\normalsize{Designed a dynamic React UI; Node.js/Express APIs; WebSocket channels with Socket.IO for low-latency sync.}}
      \resumeItem{\normalsize{Implemented role-based access, file metadata, and MongoDB schema for versioning/audit trails.}}
    \resumeItemListEnd
    
\vspace{-10pt}

\resumeProjectHeading{\href{https://google.com}{\textbf{\large\underline{Query Retrieval System $|$ {{Python, LangGraph, LangChain, Docker}}}}}}{\large2026}
\vspace{-9pt}
    \resumeItemListStart
      \resumeItem{\normalsize{Engineered an LLM-powered retrieval pipeline that answers up to 12 categorized query types with tool-use orchestration.}}
      \resumeItem{\normalsize{Containerized services with Docker; modular graphs in LangGraph; prompt \& memory strategy via LangChain.}}
      \resumeItem{\normalsize{Extended with voice/chat features (e.g., phone-style interaction) for natural query handling.}}
    \resumeItemListEnd
\vspace{-10pt}

\resumeProjectHeading{\href{https://google.com}{\textbf{\large\underline{Healthcare Availability \& Management System $|$ {{MERN, ML, REST APIs}}}}}}{\large2025}
\vspace{-9pt}
  \resumeItemListStart
    \resumeItem{\normalsize{Built a platform for \textbf{real-time tracking of hospital beds and ambulances} with role-based access.}}
    
    \resumeItem{\normalsize{Developed scalable \textbf{REST APIs} and optimized MongoDB schema for efficient data handling.}}
    
    \resumeItem{\normalsize{Applied \textbf{ML-based modeling} to analyze demand trends and integrated alerting for critical updates.}}
    
  \resumeItemListEnd

\resumeSubHeadingListEnd
\vspace{-2pt}

%-----------INTERNSHIP-----------
\section{WORK EXPERIENCE}
\resumeSubHeadingListStart
  \resumeSubheading
    {EDUNET Foundation (in collaboration with EY GDS)}{2026}
    {\underline{Web Development Intern}}{Remote, India}
    \resumeItemListStart
      \resumeItem{\normalsize{Delivered a full-stack web module (requirements \textrightarrow\ implementation \textrightarrow\ presentation) and presented outcomes to the manager.}}
      \resumeItem{\normalsize{Focused on React/Node, REST APIs, and clean Git workflows for team collaboration.}}
    \resumeItemListEnd
\resumeSubHeadingListEnd
\vspace{-12pt}

%-----------TECHNICAL SKILLS-----------

\section{TECHNICAL SKILLS}
\begin{itemize}[leftmargin=0.15in, label={}]
  \small{\item{
    \textbf{\normalsize{Languages:}}{\normalsize\ Java, Python, C, C++, Go, JavaScript, SQL, MySQL} \\[4pt]

    \textbf{\normalsize{Frameworks/Tech:}}{\normalsize\ React, Node.js, Express.js, MongoDB, Spring Boot, Socket.IO, OpenCV, LangGraph, LangChain, Three.js, Next.js} \\[4pt]

    \textbf{\normalsize{Tools/Platforms:}}{\normalsize\ Git, GitHub, HTML, CSS, Figma, Tableau, Rive, Docker, Power BI} \\[4pt]

    \textbf{\normalsize{Areas:}}{\normalsize\ DSA, AI/ML, Web Dev, Android, OS, OOPS, DBMS, UI/UX}
  }}
\end{itemize}
\vspace{-8pt}

%-----------EXTRACURRICULAR-----------
\section{EXTRACURRICULAR}
\resumeSubHeadingListStart
  \resumeSubheading{School of UI/UX}{Sep 2024 -- Present}{General Secretary}{Ghaziabad, India}
    \resumeItemListStart
      \resumeItem{Mentored \textbf{50+ students} in Data Structures and development through peer learning sessions and project guidance.}
      \resumeItem{Organized and conducted a UI/UX bootcamp attended by \textbf{150+ participants}, delivering sessions on design fundamentals and prototyping.}
    \resumeItemListEnd
\resumeSubHeadingListEnd
\vspace{-4pt}

%-----------CERTIFICATIONS-----------
\section{CERTIFICATIONS}
$\sbullet[.75]\hspace{0.1cm}$ \href{#}{Oracle Cloud Infrastructure 2025 Certified Data Science Professional} \\[1.8pt]
$\sbullet[.75]\hspace{0.1cm}$ \href{#}{Oracle Cloud Infrastructure 2025 Certified Foundations Associate}\\[1.8 pt]
$\sbullet[.75]\hspace{0.1cm}$ \href{#}{Infosys Springboard — AI, NLP \& Deep Learning} \\[1.8 pt]
$\sbullet[.75]\hspace{0.1cm}$ \href{#}{ Google Cloud - Vertex AI}

\end{document}